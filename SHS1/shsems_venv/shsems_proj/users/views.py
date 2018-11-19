from django.shortcuts import render
from django.views.generic import CreatView
from .forms import ParticipantCreationForm

class SignUpView(CreatView):
    form_class = Participant(CreationForm)
    success_url = "login/"
    template_name = "signup.html"
    