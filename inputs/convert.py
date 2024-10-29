import pandas as pd
from datetime import datetime
import pytz
import ROOT

def custom_function(time_str):
	# time_str = "07/17/23 00:51:10"

	time_obj = datetime.strptime(time_str, "%m/%d/%y %H:%M:%S")

	geneva_tz = pytz.timezone('Europe/Zurich')

	time_obj_local = geneva_tz.localize(time_obj, is_dst=None)

	time_obj_utc = time_obj_local.astimezone(pytz.utc)

	epoch = datetime(1970, 1, 1, tzinfo=pytz.utc)
	timestamp = (time_obj_utc - epoch).total_seconds()

	# print("Timestamp:", timestamp)

	begin_time = int(timestamp)  
	return begin_time
df = pd.read_csv('output.csv')
# df.columns
# print(df)
df.iloc[:, 1] = df.iloc[:, 1].apply(custom_function)
df.insert(1, 'placeholder', -999)
print(df)
df.to_csv('Run3.dat', sep=',', index=False)
