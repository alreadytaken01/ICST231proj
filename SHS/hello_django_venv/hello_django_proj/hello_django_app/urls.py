from django.urls import path

from .views import HomePageView, ResumePageView, ContactInfoPageView

urlpatterns = [
    path( "", HomePageView.as_view(), name="home_view"),
    path( "", ResumePageView.as_view(), name="resume_view"),
    path( "/", ContactInfoPageView.as_view(), name="contactinfo_view")
]