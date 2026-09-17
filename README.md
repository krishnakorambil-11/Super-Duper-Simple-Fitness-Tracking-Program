As the name says it's a Super Duper Simple Fitness Tracking Program it only works for males because i really only made it for me
it also only works for cutting cause for me but i guess you could put a lose -lbs per week when prompted for bulking

It only tracks: calories, protein, and cardio while also being able to calculate maintenance calories

Using age, height, weight, and activity level it figures out your maintenance weight using the Mifflin-St Jeor Equation

bmr (Basal Metabolic Rate) = (4.536 * weight) + (15.875 * height) - (5 * age) + 5

Activity levels: 
Sedentary | bmr *1.200 | Little to no exercise / desk job 
Lightly Active | bmr *1.375 | Light exercise or sports 1–3 days/week 
Moderately Active | bmr *1.550 | Moderate exercise or sports 3–5 days/week 
Very Active | bmr *1.725 | Hard exercise or sports 6–7 days/week 
Extra Active | bmr *1.900 | Very hard exercise, physical job, or 2x/day training

amt_week = how many lbs you want to lose per week
bmr -= ((amt_week * 3500) / 7)

(also there's like no input validation so be very careful)
