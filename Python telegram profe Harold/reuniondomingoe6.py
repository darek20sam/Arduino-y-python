"""
6.	Diseñe un algoritmo para convertir una cantidad dada en pulgadas a pies, yardas y centímetros. Se sabe que:
1 yarda = 3 pies
1 pie = 12 pulgadas
1 pulgada = 2.54 centímetros
1 metro = 100 centímetros
"""
cp=float(input("Ingrese cantidad a convertir: "))
unidad = input("Especifique la unidad del valor: pul, yar, pie, m,cm: ")

a_unidad = input("Especifique a que unidad desea convertir pul, yar, pie, m,cm: ")

if unidad == "yar" and a_unidad == "pies":
  resultado = cp*3
  print(resultado,'pies')

elif unidad == "yar" and a_unidad == "pul":
  resultado = cp*3*12
  print(resultado,'pulgadas')

elif unidad == "yar" and a_unidad == "cm":
  resultado = cp*3*12*2.54
  print(resultado,'cm')

elif unidad == "yar" and a_unidad == "m":
  resultado = (cp*3*12*2.54)/100
  print(resultado,'m')

elif unidad == "pie" and a_unidad == "yar":
  resultado = (cp/3)
  print(resultado,'yardas')

elif unidad == "pie" and a_unidad == "pul":
  resultado = cp*12
  print(resultado, 'pulgadas')
  
elif unidad == "pie" and a_unidad == "cm":
  resultado = (cp*12*2.54)
  print(resultado, 'centimetros')   
  
elif unidad == "pie" and a_unidad == "m":
  resultado = cp*12*2.54/100
  print(resultado,'metros')
elif unidad == "m" and a_unidad=="cm":
  resultado=(cp*100)
  print("el resultado de la conversion es:",resultado)

else:
  print("Hey, ingresaste mal alguna unidad.")