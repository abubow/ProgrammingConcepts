def areaOfCircle(radius): # area of circle = pi * r^2
    return 3.14 * radius ** 2 # ** is the power operator
def circumferenceOfCircle(radius): # circumference of circle = 2 * pi * r
    return 2 * 3.14 * radius 


radius = float(input('Enter the radius of the circle: '))
print('The area of the circle is:', areaOfCircle(radius))
print('The circumference of the circle is:', circumferenceOfCircle(radius))