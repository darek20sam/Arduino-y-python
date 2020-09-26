empezar = 0
suma = 1
resta = 2
division = 3
multi = 4
print("calculadora")
print("1 = suma.")
print("2= resta.")
print("3 = division.")
print("4 = multiplicacion.")
funcion=int(input("ingrese un num de funcion: "))
if funcion==suma:
    n1=int(input("ingrese el primer numero a sumar"))
    n2=int(input("ingrese el segundo numero a sumar"))
    resultado= n1 + n2
    print(resultado)
elif funcion==resta:
    n1=int(input("ingrese el primer numero a restar"))
    n2=int(input("ingrese el segundo numero a restar"))
    resultado= n1-n2
    print(resultado)
elif funcion==multi:
    n1=int(input("ingrese el primer numero a multiplicar:"))
    n2=int(input("ingrese el segundo numero a multiplicar:"))
    resultado= n1*n2
    print(resultado)
elif funcion==division:
    n1=float(input("ingrese el primer numero a dividir:"))
    n2=float(input("ingrese el segundo numero a dividir:"))
    resultado = n1/n2
    print(resultado)