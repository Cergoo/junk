# Я зашифровал для вас послание. Вот оно:

# 1, 23, 5, 19, 15, 13, 5

# Один из встроенных массивов, о котором я упоминал в лекциях, поможет вам расшифровать эпитет, применимый к языку R. Регистр неважен.

# Верно!

x <- c(1, 23, 5, 19, 15, 13, 5)
for (i in x){print(letters[i])}