class Person:

    def __init__(self,firstname,lastname):
        self.firstname = firstname
        self.lastname = lastname


    def __str__(self):
        return "{},{}".format (self.firstname, self.lastname)
        self.lastname

    def eat(self,food):
        print("{} will eat {}".format(self.firstname, self.lastname))

    class Student(Person):

        def __init__(self,firstname, lastname, school = ""):
            super().__init__(firstname,lastname)
            self.school=school

        def __str__(self):
            return("{}, {}".format(self.firstname,self.lastname))
            super().__str__(firstname,lastname)
            self.school


    if __name__ == "__main__":

 Charmaine=("Chay","Osoc")
    print (Charmaine)