# Используем данные mtcars. Сохраните в переменную логистическую регрессионную модель, где в качестве зависимой переменной выступает тип коробки передач (am), в качестве предикторов переменные disp, vs, mpg.

# Используя функцию print(), выведите на печать значения коэффициентов регрессии.

df <- mtcars
model <- glm(am~disp+vs+mpg, df, family = "binomial")
#summary(model)
print(model$coefficients)

