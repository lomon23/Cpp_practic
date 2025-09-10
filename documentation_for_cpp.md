# щоб створити змінні:
    int a;          // оголошення — локальна невизначена змінна)
    int b = 5;      // ініціалізація копіюванням
    int c{5};       // uniform initialization (рекомендовано)
    int d(5);       // конструкція через дужки
    auto x = 42;    // type авто-виводиться (тут int)
    const int K = 10;       // константа — змінити не можна
    constexpr int M = 20;   // константа відома на етапі компіляції
--- 
# Основні типи данних
Коротко:

    Цілі: short, int, long, long long (можуть бути signed або unsigned).

    Символи: char (іноді signed char / unsigned char), wchar_t.

    Логічний: bool (true / false).

    Дробові: float, double, long double.

    Рядки: std::string (включити <string>).

    Контейнери: std::vector<T> — динамічний масив.

    Інші: enum, struct, класи, вказівники T*, посилання T&.
---
# Посилання та вказівники
    Посилання (&) — синонім іншої змінної:
        int a = 5;
        int &r = a;  // r — посилання на a
        r = 10;      // змінює a
