class Point:
    def __init( self ):
        self.x = 0
        self.y = 0

    def __str__(self):
  return "({},{})".format (self.x, self.y)
  
     def  distance_from_origin(self):
         d = sqrt(self.x**2 + self.y**2)
         return d

    def __eq__(self, p):
        return self.x == p.x and self.y == p.y


   def __add__ (self, q):
     r = Point(self.x + q.x, self.y=q.y)
     return r

   def __sub__ (self, q):
     r = Point(self.x - q.x, self.y=q.y)
     return r
 
  
 def __mul__ (self, q):
     r = Point(self.x*c, self.y*y)
     return r
if "__name__" == "__main__":

p = Point()
print("p.x = {}". format(p.x, p.y))
print("p = {}".format(p))

p = Point(x=3.4, y=5.6)
print("p.x = {}". format(p.x, p.y))

print("p = {}".format(p))