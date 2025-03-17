# a program to find the circumference of circle

import math

r = int(input("Enter the Radius of circle: "))

circum = 2*(math.pi)*r
area = math.pi*r*r

print(f"Circumference of Cirlce is approximately: {round(circum,2)}")
print(f"The area is: {round(area,3)}")