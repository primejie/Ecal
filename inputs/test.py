from datetime import datetime
import pytz
import ROOT

time_str = "06/25/22 00:51:10"

time_obj = datetime.strptime(time_str, "%m/%d/%y %H:%M:%S")

geneva_tz = pytz.timezone('Europe/Zurich')

time_obj_local = geneva_tz.localize(time_obj, is_dst=None)

time_obj_utc = time_obj_local.astimezone(pytz.utc)

epoch = datetime(1970, 1, 1, tzinfo=pytz.utc)
timestamp = (time_obj_utc - epoch).total_seconds()

print("Timestamp:", timestamp)

begin_time = int(timestamp)  
datime = ROOT.TDatime(begin_time)
sql_string = datime.AsSQLString()
print("SQL:", sql_string)
