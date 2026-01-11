

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

# Изменения
# а) В трёх классах изменилось количество
classes["1а"] = 25
classes["2б"] = 24
classes["4а"] = 23

# б) Появились два новых класса
classes["6а"] = 18
classes["6б"] = 20

# в) Расформировали один класс
if "3б" in classes:
    del classes["3б"]

# 1) Общее количество учащихся
total_students = sum(classes.values())
print(f"Общее количество учащихся: {total_students}")

# 2) Вывод словаря
print("\nКлассы и численность:")
for cls, count in classes.items():
    print(f"{cls} | {count}")
