from django.shortcuts import render

# Create your views here.

from django.views.generic import TemplateView

class HomePageView(TemplateView):
    template_name = "home.html"

    #def get_context_data(self):
        #data = {"message_title" : "Favorite Quote",
               # "message" : "Don't stop when you're TIRED. Stop when you're DONE. -unknown"}
        #return data
    
class ResumePageView(TemplateView):
    template_name = "resume.html"


class ContactInfoPageView(TemplateView):
    template_name: "contactinfo.html"
    