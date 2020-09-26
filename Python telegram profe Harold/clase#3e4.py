nuevalista = [1,2,True,False,"cadena",[1,2]]

print(nuevalista)

nuevalista.append(4)
nuevalista.append(True)
nuevalista.append('asdsada')
nuevalista.append([5,True])

print(nuevalista)

print("Los métodos que puedes con una lista es el siguiente")
print(dir(nuevalista))

print("Eliminado un elemento")
nuevalista.pop()
print(nuevalista)