from selenium import webdriver
from selenium.webdriver.common.by import By

driver=webdriver.Firefox()
driver.get("http://rgukt.ac.in")

noti=driver.find_element(By.CSS_SELECTOR,".wrapper > marquee:nth-child(3) > p:nth-child(1) > strong:nth-child(1) > font:nth-child(1) > a:nth-child(1)")
noti.click()

