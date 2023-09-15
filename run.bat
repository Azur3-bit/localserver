@echo off
start "" "a.exe"
waitfor /t 1 WaitingForA
start "" "temp.exe"