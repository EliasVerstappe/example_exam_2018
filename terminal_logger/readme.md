# Terminal Logger

Implement the `TerminalLogger` class so the log messages are send to the terminal.

The `TimeStamp` class has a static method `now()` that can be called without creating objects of the class (just call `TimeStamp.now()`. Use it to generate a time stamp which should be placed in front of severity of the log message. The output should be equivalent with the output shown below:

```text
Mon May 14 14:43:55 2018 [INFO]: Setting alarm code
Mon May 14 14:43:55 2018 [INFO]: Clearing alarm state
Mon May 14 14:43:55 2018 [INFO]: Setting alarm code
Mon May 14 14:43:55 2018 [INFO]: Trying to arm the alarm
Mon May 14 14:43:55 2018 [INFO]: Clearing alarm state
Mon May 14 14:43:55 2018 [INFO]: Alarm armed
Mon May 14 14:43:55 2018 [INFO]: Trying to disarm the alarm
Mon May 14 14:43:55 2018 [WARNING]: Wrong code provided
Mon May 14 14:43:55 2018 [INFO]: Trying to disarm the alarm
Mon May 14 14:43:55 2018 [WARNING]: Wrong code provided
Mon May 14 14:43:55 2018 [INFO]: Trying to disarm the alarm
Mon May 14 14:43:55 2018 [INFO]: Clearing alarm state
Mon May 14 14:43:55 2018 [INFO]: Alarm disarmed
Mon May 14 14:43:55 2018 [INFO]: Trying to arm the alarm
Mon May 14 14:43:55 2018 [INFO]: Clearing alarm state
Mon May 14 14:43:55 2018 [INFO]: Alarm armed
Mon May 14 14:43:55 2018 [INFO]: Trying to disarm the alarm
Mon May 14 14:43:55 2018 [WARNING]: Wrong code provided
Mon May 14 14:43:55 2018 [INFO]: Trying to disarm the alarm
Mon May 14 14:43:55 2018 [WARNING]: Wrong code provided
Mon May 14 14:43:55 2018 [INFO]: Trying to disarm the alarm
Mon May 14 14:43:55 2018 [WARNING]: Wrong code provided
Mon May 14 14:43:55 2018 [SERIOUS]: Alarm triggered
```
