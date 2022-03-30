import os
import re

from tkinter import messagebox
 
os.environ["PATH"] += os.pathsep + r'C:/Users/Krupali/OneDrive/Desktop/'

from selenium import webdriver as wd

driver=wd.Chrome()

#driver.get("https://google.com")
driver.get("file:///C:/Users/Krupali/OneDrive/Desktop/registration.html") 

driver.find_element_by_name("uname").send_keys("Adarsh")
driver.find_element_by_name("password").send_keys("Adarsh")
driver.find_element_by_name("rpassword").send_keys("Adarsh")
driver.find_element_by_name("rpassword").clear()
driver.find_element_by_name("rpassword").send_keys("Adarsh")

#radio button
driver.find_element_by_xpath("//input[@value='Male']").click()

#check boxes
driver.find_element_by_name("language1").click()
driver.find_element_by_name("language2").click()

#submit button
#driver.find_element_by_xpath("//input[@type='submit']").click()

#browser.find_element_by_name("uname").send_keys("123")
#a=browser.find_element_by_name("uname").get_attribute("value")

#pattern = re.compile("^([A-Z][a-z]+)$")
#if pattern.match(a):
#	messagebox.showinfo("Title", "Matching")  
#else:
#	messagebox.showinfo("Title", "Not Matching")  
