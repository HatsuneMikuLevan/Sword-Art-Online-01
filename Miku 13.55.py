

elements = {
    "медь": "Cu",
    "кислород": "O",
    "водород": "H",
    "железо": "Fe",
    "золото": "Au"
}

name = input("Введите название элемента: ").strip().lower()

if name in elements:
    print("Элемент есть в словаре.")
else:
    print("Элемента нет в словаре.")
