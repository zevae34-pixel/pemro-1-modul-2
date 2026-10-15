def get_inputs(count=6):
    inputs = []
    while len(inputs) < count:
        line = input().split()
        inputs.extend(line)
    return [float(x) for x in inputs[:count]]

def main():
    a, b, c, d, e, f = get_inputs()
    hasil = (a-b) * (c / d) - (e + f)
    print(f"{hasil:.3f}")

if __name__ == "__main__":
    main()