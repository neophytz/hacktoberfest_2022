try:
    numerator = int(input('enter a number to divide : '))
    denominator = int(input('enter a number to divide by : '))
    result = numerator/denominator

except ZeroDivisionError as e :
    print('you can not divide it by zero , stupid' )
    print(e)
except ValueError as e :
    print('enter only number please ')
    print(e)
except Exceptidon as e :
    print("something went wrong ")
    print(e)
else:
    print(result)
finally:
    print('this will always execute in finally ')
