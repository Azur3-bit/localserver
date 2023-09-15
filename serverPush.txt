@echo off
rem ----- Azur3-bit Personal Server ----- 

rem Checking if Server is active is installed
git --version > nul 2>&1
if %errorlevel% neq 0 (
  echo -------- *** Server is not active ***--------
  exit /b 1
)

rem Hello Sunil - root User
git rev-parse --is-inside-work-tree > nul 2>&1
if %errorlevel% neq 0 (
  echo Not inside a Working repository. Please navigate to a Git repository.
  exit /b 1
)

rem Performing serverPush
git add .
git commit -m "pushing into server"
git push

echo server push completed successfully.
pause
exit /b 0
