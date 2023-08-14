
'''x=y=z="orange"
print(x)
print(y)

print(z)'''


#fruits=("orjange,","apple,","mango")

#x,y,z=fruits

#print(x,y,z)



#a="Python "

#b="is "

#c="awesome."

#print(a+b+c)



#x = 5

#y = 10

#print(x+y)



#x=5

#y="Lemon"
#print(x,y)




#x="awesome."

#def myfunc():

#    print("python is "+x)
#myfunc()



#x="awesome"

#def myfunc():
#    x="fantastic"

#    print("Python is "+x)
#myfunc()

#print("Python is"+x)



#Global Variable
'''def myfunc():

    global x

    x="awesome"

    print("Python is "+ x)
myfunc()'''



#Replace Method
#print("Welcome to C Programming.".replace("C","Python"))



#strip Method
#x="Welcome to Mymensingh Polytechnic Institute. "
#a=x.strip('W')
#print(a)



#Swapcase Method
#x="We love Bangladesh"
#a=x.swapcase()
#print(a)



#Count
#x="We love Bangladesh"
#a=x.count('e')
#print(a)



#Upper
#x="We love Bangladesh"
#a=x.upper() 
#print(a)



#Lower()

#x="WE LOVE BANGLADESH"
#a=x.lower() 
#print(a)



#Membership Operator
'''
x='M' in 'Milon'
print(x)

x='R' in 'Milon'
print(x)

x='M' not in "Milon"
print(x)

x='R' not in 'Milon'
print(x)
'''



#sum=0

#for i in range(1,101):

#    sum=sum+i

#print("The summation result:",sum)



#python program to print name 10 times

'''
i=0

for i in range(10):
   print("Milon")
'''


#Temperature conversion:
#Celsius to fahrenheit

'''
celsius = float(input("Enter Celsius Temperature:"))

fahrenheit = (celsius*(9/5))+32

print('%0.2f degree is equal to = %0.2f degree fahrenheit'

    %(celsius,fahrenheit))
'''
'''
fahrenheit =float(input('Enter the Fahrenheit tempurature:'))

celsius = (5*(fahrenheit-32))/9

print('%0.2f degree fahrenheit = %0.2f degree celsius'%(fahrenheit,celsius))
'''



#area of circle
'''
pi = 3.1416
r = float(input('The Circle Radius:'))
area = pi*r*r 
print("The circle area is %0.2f"%area)
'''
'''import math
def area(radius):
    area = math.pi*radius**2
    return area
radius=area(int(input("Input the circle radius:")))
print("The area of circle is:",radius)'''



#Python program to find the smallest number between two numbers
'''
number1 = float(input('Enter The First Number:'))
number2 = float(input('Enter The Second Number:'))
if (number1>number2):
    print("smallest number is=",number2)
else:
    print("smallest number is = ",number1)
'''
#Python program to find the largest number between three numbers.
'''
a=int(input("Enter the value of a:"))
b=int(input("Enter the value of b:"))
c=int(input("Enter the value of c:"))
if a>b and a>c:
    print("The largest value is a:",a)
elif b>a and b>c:
    print("The largest value is b:",b)
else:
    print("The largest value is c:",c)
'''



#python program to find factorial value of a positive number
'''
def factorial(n):
    if n < 0:
        print('Sorry,Factorial does not exit for negative numbers. ')
    elif n == 0:
        return 1
    else: 
        return n * factorial(n-1)
n = int(input(Enter a number : '))
print(factorial(n))
'''



#updating, inserting, deleting list elements
#Updating list element
'''
b = ['Mahi',587,'COBAL',3.1416,'Samsul',96002]
b[0]='Mahadee'
print(b)
b[4]=900
print(b)
b[5]=6814.25
print(b)
'''
#Inserting new item in the list
'''
b=['mahi',587,'COBAL',3.1416,'Samsul',96002]
b.append('Mahdee')
print(b)
b.insert(3, 'tonny')
print(b)
b.extend('Munny''Sumaiya')
print(b)
'''
#Deleting list element
'''
b=['mahi',587,'COBAL',3.1416,'Samsul',96002]
del b[2]
print(b)
b.remove(3.1416)
print(b)
'''



#Using elif statement determine mark grad
'''
marks = int(input('Enter your marks: '))
if marks>=80:
    print("Your grad is A+")
elif marks>=70:
    print("Your grad is A")
elif marks>=60:
    print("Your grad is A-")
elif marks>=50:
    print("Your grad is B")
elif marks>=40:
    print("Your grad is C")
else:
    print("Your grad is F")
'''



#Quadratic Equations Root Determinants python Program
'''
import math
a = int(input("Enter the value of a:"))
b = int(input("Enter the value of b:"))
c = int(input("Enter the value of c:"))

d = (b*b)-(4*a*c)

if (d==0):
    x = -b/(2*a)
    print("Roots are real & equal & are:",x,x)
elif (d>0):
    x1 = (-b+math.sqrt(d))/(2*a)
    x2 = (-b-math.sqrt(d))/(2*a)
    print("Roots are real & unequal & are:",x1,x2)
else:
    print("The Roots are imaginary")
    '''



#Python program to calculate even and odd numbers
#2+4+6+8+......100
'''
maximum = int(input("even:Please enter the maximum number:"))
total = 0
for number in range(1,maximum+1):
    if (number % 2 == 0):
        print("{0}".format(number))
        total = total + number
print(" The sum of Even Numbers from 1 to {0} = {1}".format(number,total))
'''
'''
sum=0

for i in range(2,101,2):

    sum=sum+i

print("The summation Result is:",sum)
'''
'''def summation():
    n=1
    sum=0
    for n in range(100):
        if n%2 == 0:
            continue
        sum=sum + n
    return sum
add= summation()
print("The summation is:",add)'''
#1+3+5+7+.........+100
'''
maximum = int(input("odd:Please enter the maximum number:"))
total = 0
for number in range(1,maximum+1):
    if (number % 2 != 0):
        print("{0}".format(number))
        total = total + number
print(" The sum of Even Numbers from 1 to {0} = {1}".format(number,total))
'''
'''
sum=0
for i in range (1,100,2):
    sum=sum+i
print("the summation result is:",sum)
'''



#Calculate the area of triangle.
'''
a = float(input('Enter first side: '))  
b = float(input('Enter second side: '))  
c = float(input('Enter third side: '))   
s = (a + b + c) / 2   
if (a+b)>c and (b+c)>a and (c+a)>b:
    area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
    print('The area of the triangle is %0.2f' %area) 
else:
    print("Triangle is not possible.")  
'''



#list arranging ascending and descanting.
'''
nums = [1, 5, 3, 4, 2, 10, 6, 8, 7, 9]
nums.sort()
print('List in Ascending Order: ', nums)

nums.sort(reverse=True)
print('List in Descending Order: ', nums)
'''
# Program to check if a number is prime or not
'''num = int(input("Enter a number:"))
if num > 1:
   for i in range(2,num):
       if (num % i) == 0:
           print(num,"is not a prime number")
           break
   else:
       print(num,"is a prime number")
else:
   print(num,"is not a prime number")'''

'''#prime number between 1 to 100
num1 = int(input ("Please, Enter the Lowest Range Value: "))  
num2 = int(input ("Please, Enter the Upper Range Value: "))  
print ("The Prime Numbers in the range are: ")  
for number in range (num1, num2 + 1):  
    if number > 1:  
        for i in range (2, number):  
            if (number % i) == 0:  
                break  
        else:  
            print (number)
'''
#arranging string reverse order using function:
'''def reverse(s):
    str = ""
    for i in s:
        str = i + str
    return str

s = "Geeksforgeeks"

print("The original string is : ", end="")
print(s)

print("The reversed string(using loops) is : ", end="")
print(reverse(s))'''



# Python program to find sum of elements in list
'''list1 = [11, 5, 17, 18, 23]
total = sum(list1)
print("Sum of all elements in given list: ", total)'''



#Find numbers which are divisible by 7 and multiple of 5 between a range
'''for i in range(1, 100):
    if i%7==0 and i%5==0:
        print(i, end = ' ')'''


#program to check leap year
'''
year = int(input("Enter the year: "))    
if((year % 400 == 0) or  
     (year % 100 != 0) and  
     (year % 4 == 0)):   
    print(year,"This year is a leap year.")   
else:  
    print (year,"This year is a not leap year.")    
'''



#Area of rectangular
'''length=int(input("Enter length:"))
width=int(input("Enter width:"))
area=length*width
print("The rectangular area is:",area)'''



#python program to check even or odd
num = int(input("Enter a number: "))
if (num % 2) == 0:
   print("{0} is Even".format(num))
else:
   print("{0} is Odd".format(num))


