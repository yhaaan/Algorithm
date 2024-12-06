from datetime import datetime

# 오늘 날짜 가져오기
today = datetime.today()

# 형식에 맞게 출력
formatted_date = today.strftime("%Y-%m-%d")
print(formatted_date)
