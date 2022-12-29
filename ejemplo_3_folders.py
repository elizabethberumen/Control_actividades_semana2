import os
import io


def escribir():
    file = open("ejemplo_1.txt","w")

    while(1):
        forWrite = input("Escribe algo aqui\n")
        file.write(forWrite)
        siguienteLinea = input("Escribe la siguiente linea\n")

        if siguienteLinea == 'E':
            break

        file.close()

os.makedirs("carpeta_uno\carpeta_dos\carpeta_tres")
os.mkdir("folder")
os.chdir("folder")

with open("ejemplo_1.txt", "w") as x1:
    escribir()
    print("Se han creado tus archivos")


