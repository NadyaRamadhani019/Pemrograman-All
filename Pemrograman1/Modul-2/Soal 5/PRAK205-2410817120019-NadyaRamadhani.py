#input output pertama
import math
a, b = map(int, input().split())
alas = math.sqrt (b**2 - a**2)
tinggi = a
keliling = tinggi + b + alas
luas = 1/2 * alas * tinggi
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

print("")

#input output kedua
import math
a = int(input())
b = int(input())
alas = math.sqrt (b**2 - a**2)
tinggi = a
keliling = tinggi + b + alas
luas = 1/2 * alas * tinggi
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")