inp =  [0, 30, 31, 60, 61, 90, 91, 100]
out = ['Water and fertilize', 'Water and fertilize', 'Water generously', 'Water generously', 'Water lightly', 'Water lightly', 'Admire the bloom', 'Admire the bloom']

def tend_aquilegia_garden(plant_health):
    instruction = []
    for i in plant_health:
        if i>=0 and i<=30:
            instruction.append('Water and fertilze')
        elif i>=31 and i<=60:
            instruction.append('Water generously')
        elif i>=61 and i<=90:
            instruction.append('Water lightly')
        else:
            instruction.append('Admire the bloom')
    return instruction
res = tend_aquilegia_garden(inp)
print(res)
print(out)
