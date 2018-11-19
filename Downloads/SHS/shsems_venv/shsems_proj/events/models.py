from django.db import models

class Event(models.Model):
    name = models.CharField("Name of Event",
        max_length = 50)
    description = models.TextField("Description",
        max_length = 1000, blank = True)

    def __str__(self):
        return self.name