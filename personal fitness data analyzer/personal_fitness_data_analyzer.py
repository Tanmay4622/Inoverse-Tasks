import pandas as pd

file_name = 'python/personal fitness data analyzer/PersonalFitnessDataAnalyzer.csv'
df = pd.read_csv(file_name)
print("\nDataFrame loaded successfully:")

def column_average(column_name):
    return round(df[column_name].mean(), 2)
    
def weekly_average(column_name):
    return round(df[column_name].mean() * 7, 2)

def monthly_average(column_name):
    return round(df[column_name].mean() * 30, 2)

def best_day():
    max_val = df['mood_score'].max()
    best_days = []
    for i in range(len(df)):
        if df.at[i, 'mood_score'] == max_val:
            best_days.append(df.at[i, 'date'])
    return best_days

def worst_day():
    min_val = df['mood_score'].min()
    worst_days = []
    for i in range(len(df)):
        if df.at[i, 'mood_score'] == min_val:
            worst_days.append(df.at[i, 'date'])
    return worst_days
            
activity_counts = df['workout_type'].value_counts() 

class recommended_averages:
    steps = 10000
    calories_burned = 2200
    active_minutes = 30
    heart_rate_avg = 70
    sleep_hours = 7
    water_intake_liters = 3.7

def fitness_advice():
    step_advice = ''
    calories_advice = ''
    time_advice = ''
    heartrate_advice = ''
    sleep_advice = ''
    water_advice = ''
    if column_average('steps') < recommended_averages.steps:
        step_advice = ' Try to increase your daily steps. \n'
    if column_average('calories_burned') < recommended_averages.calories_burned:
        calories_advice = 'Try to burn more calories daily. \n'
    if column_average('active_minutes') < recommended_averages.active_minutes:
       time_advice = " Engage in more physical activity each day. \n"
    if column_average('heart_rate_avg') > recommended_averages.heart_rate_avg:
        heartrate_advice = " Work on lowering your average heart rate. \n"
    if column_average('sleep_hours') < recommended_averages.sleep_hours:
        sleep_advice = " Ensure you get at least 7 hours of sleep each night for optimal health. \n"
    if column_average('water_intake_liters') < recommended_averages.water_intake_liters:
        water_advice = " Increase your water intake to about 3.5 liters daily. \n"
    advice = '' + step_advice + calories_advice + time_advice + heartrate_advice + sleep_advice + water_advice
    return advice

summary= "FITNESS REPORT\n\n" \
 "daily averages:\n" \
    f"  steps:           {round(column_average('steps'))}\n" \
    f"  distance:        {column_average('distance_km')} km\n" \
    f"  calories:        {column_average('calories_burned')} calories\n" \
    f"  time:            {column_average('active_minutes')} minutes\n" \
    f"  heart rate:      {column_average('heart_rate_avg')} bpm\n" \
    f"  sleep hour:      {column_average('sleep_hours')} hours\n" \
    f"  weight:          {column_average('weight_kg')} kg\n" \
    f"  water intake:    {column_average('water_intake_liters')} Litres\n" \
    f"  mood score:      {column_average('mood_score')}\n\n" \
 "weekly averages:\n" \
    f"  steps:           {round( weekly_average('steps'))}\n" \
    f"  distance:        { weekly_average('distance_km')} km\n" \
    f"  calories:        { weekly_average('calories_burned')} calories\n" \
    f"  time:            { weekly_average('active_minutes')} minutes\n" \
    f"  heart rate:      { weekly_average('heart_rate_avg')} bpm\n" \
    f"  sleep hour:      { weekly_average('sleep_hours')} hours\n" \
    f"  weight:          { weekly_average('weight_kg')} kg\n" \
    f"  water intake:    { weekly_average('water_intake_liters')} Litres\n" \
    f"  mood score:      { weekly_average('mood_score')}\n\n" \
 "monthly averages:\n" \
    f"  steps:           {round(  monthly_average('steps'))}\n" \
    f"  distance:        {  monthly_average('distance_km')} km\n" \
    f"  calories:        {  monthly_average('calories_burned')} calories\n" \
    f"  time:            {  monthly_average('active_minutes')} minutes\n" \
    f"  heart rate:      {  monthly_average('heart_rate_avg')} bpm\n" \
    f"  sleep hour:      {  monthly_average('sleep_hours')} hours\n" \
    f"  weight:          {  monthly_average('weight_kg')} kg\n" \
    f"  water intake:    {  monthly_average('water_intake_liters')} Litres\n" \
    f"  mood score:      {  monthly_average('mood_score')}\n\n" \
 f"Your best days were:  {best_day()}\n" \
 f"Your worst days were: {worst_day()}\n\n" \
 f"Your favouraite activities: \n{(pd.DataFrame(activity_counts))}\n\n" \
 f"Health Advice:\n {fitness_advice()}\n"

with open("python/personal fitness data analyzer/Fitness_Report.txt", "w") as file:
    file.write(summary)