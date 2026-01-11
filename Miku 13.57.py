

countries = {
    "Россия": "Москва",
    "Франция": "Париж",
    "Германия": "Берлин",
    "Италия": "Рим",
    "Япония": "Токио"
}

# 1) Столица по стране
country = input("Введите страну: ").strip()
if country in countries:
    print(f"Столица: {countries[country]}")
else:
    print("Страна не найдена.")

# 2) Страна по столице
capital = input("Введите столицу: ").strip()
found = False
for ctry, cap in countries.items():
    if cap == capital:
        print(f"Страна: {ctry}")
        found = True
        break
if not found:
    print("Столица не найдена.")
