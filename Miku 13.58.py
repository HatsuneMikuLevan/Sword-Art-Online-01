
classes = {
    "1а": 24,
    "1б": 26,
    "2а": 22,
    "2б": 25,
    "3а": 20,
    "3б": 23,
    "4а": 21,
    "4б": 24,
    "5а": 19,
    "5б": 22
}

class_name = input("Введите класс: ").strip()
if class_name in classes:
    print(f"Численность: {classes[class_name]}")
else:
    print("Класс не найден.")
