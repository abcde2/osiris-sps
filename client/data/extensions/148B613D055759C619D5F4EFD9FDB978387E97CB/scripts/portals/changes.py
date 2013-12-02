import os
import osiris
from osiris import events

class Page(osiris.IPortalPage):
	def __init__(self, session):
		osiris.IPortalPage.__init__(self, session)
				
	def getPageName(self):
		return "portal.pages.changes"		
		
	def onInit(self):
		osiris.IPortalPage.onInit(self)	
		
		#if(self.loggedUser.guestMode == False):
		commands = osiris.HtmlDiv()
		commands.css = "os_commands_right"
		self.getArea(osiris.pageAreaContent).controls.add(commands)
		self.updateReferenceButton = osiris.HtmlLinkButton()
		commands.controls.add(self.updateReferenceButton)
		self.updateReferenceButton.id = "markAsRead"
		self.updateReferenceButton.css = "os_button"
		self.updateReferenceButton.caption = self.getText("portal.pages.changes.mark_as_read")
		events.connect(self.updateReferenceButton.eventClick, self.onMarkAsRead)	
				
	def onLoad(self):
		osiris.IPortalPage.onLoad(self)		
		
		myBlock = osiris.IdeBlock(self.getText("portal.pages.changes.title"))
		myBlock.outerStyle = "clear:both";
		
		query = osiris.SearchQuery()
				
		query.orderMode = osiris.searchOrderModeSubmitDate
		query.orderDirection = osiris.searchOrderDirectionDescendent
		#if(self.loggedUser.guestMode == False):
		query.fromInsertDateType = osiris.searchDateTimeReference
		query.groupMode = False
		query.showDeleted = True
		query.template = "blog"
			
		params  = { }
		params["mode"] = "rss"		
		query.rssUrl = self.portal.getLink("changes", params)
		
		self.ideQuery = osiris.IdeSearchQuery(query)
		self.ideQuery.setDirectRun(True)
		self.ideQuery.setShowParams(False)						
		self.ideQuery.id = "query"
		
		myBlock.body.controls.add(self.ideQuery)
		self.getArea(osiris.pageAreaContent).controls.add(myBlock)
			
	def onPreRender(self):
		osiris.IPortalPage.onPreRender(self)			
		
		if(self.request.getUrlParam("mode") == "rss"):
			rssTitle = self.portal.options.name + " - " + self.getText("portal.pages.changes.title")
			rssDescription = ""
			rssLink = self.portal.getLink("changes")
			rssLanguage = self.language					
			self.ideQuery.doFeed(rssTitle, rssDescription, "full", rssLink, rssLanguage)

	def onMarkAsRead(self, args):
		self.updateReferenceDate()
		self.reload()
				
def main(args):
	page = Page(args[0])
	page.transmit()