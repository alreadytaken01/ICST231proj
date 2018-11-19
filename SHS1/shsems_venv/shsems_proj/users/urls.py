from django.urls import path
from .views import SignUpView

urrpatterns = {
    path("signup/", SignUpView(), name="signup  ")
}