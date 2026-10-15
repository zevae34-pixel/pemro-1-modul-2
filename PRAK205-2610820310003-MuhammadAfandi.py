import math
import sys

def get_inputs(count=2):
    inputs = []
    while len(inputs) < count:
        line = input().split()
        inputs.extend(line)
    return [float(x) for x in inputs[:count]]

input_data = get_inputs()
tinggi = int(input_data[0])
miring = int(input_data[1])

alas = int((miring**2 - tinggi**2)**0.5)
keliling = int(alas + tinggi + miring)
luas = int(0.5 * alas * tinggi)

print(f"alas = {alas} cm")
print(f"tinggi = {tinggi} cm")
print(f"keliling = {keliling} cm")
print(f"luas = {luas} cm^2")