import os
from unicodedata import name
from selenium import webdriver 
import selenium 
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC



drive = webdriver.Firefox()
drive.get("https://hub.rgukt.ac.in")
drive.implicitly_wait(8)
userName=drive.find_element(by=By.NAME,value="username" )
userName.click()
userName.send_keys("B181094")
password=drive.find_element(by=By.NAME,value="password" )
password.click()
password.send_keys("sahebhussain")
try:
    checkbox=drive.WebDriverWait(drive, 20).until(EC.element_to_be_clickable((By.CSS_SELECTOR, "div.recaptcha-checkbox-border")))
    checkbox.click()
except:
    print("not found")
try:
    login=WebDriverWait(drive, 20).until(EC.element_to_be_clickable((By.CSS_SELECTOR, ".btn-primary")))
    login.click()
except:
    print("nooooo")




