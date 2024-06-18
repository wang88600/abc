import serial

# 打開串口
ser = serial.Serial('COM1', 9600, timeout=1) # 預設印表機串口

# 設定ZPL指令
zpl_command = '''
^XA

^FO50,50^GB500,350,5^FS

^CF0,40
^FO100,95^FDABCDE-12345^FS
^FO100,145^FDabcde-12345^FS
^FO100,195^FDABCDE-12345-abcde^FS
^FO50,250^GB500,3,5^FS

^BY3,3,50
^FO110,280^BC^FD12345678^FS

^XZ
'''

# 將ZPL指令轉換為位元組數組
zpl_bytes = zpl_command.encode('utf-8')

# 發送ZPL指令到印表機
ser.write(zpl_bytes)

# 關閉串口
ser.close()