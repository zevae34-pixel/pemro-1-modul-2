def get_inputs():
    inputs = []
    while len(inputs) < 2:
        line = input().strip()
        if line:
            inputs.extend(line.split())
    return inputs[:2]

input_data = get_inputs()

def hitung_tabung():
    r = float(input_data[0])
    t = float(input_data[1])

    phi = 3.142857

    Volume = phi * r * r * t
    Luas = 2 * phi * r * (r + t)
    Keliling = 2 * phi * r

    print(f"Volume = {Volume:.2f}")
    print(f"Luas = {Luas:.2f}")
    print(f"Keliling = {Keliling:.2f}")

hitung_tabung()