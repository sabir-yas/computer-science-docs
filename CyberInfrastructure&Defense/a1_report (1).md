
# **Assignment 1 Report**

#### CSCI 5743: Cyber and Infrastructure Defense, Fall 2025

**Name & Student ID**: \[Your Full Name], \[Your Student ID]

---

# **Section 1: Conceptual Assignments**

## **Task 1: Cybersecurity Incident Analysis**

### **Incident 1**

#### **1. Attack Overview**

* **Targeted Organization:**
* **Summary of Attack:**
* **Impact:**

#### **2. Key Technical Methods Used**

* **Technique 1:**
* **Technique 2:**
* **Technique 3:**

#### **3. Threat Actor Classification**

* **Type of Attacker (Nation-state, cybercriminal, etc.):**
* **APT Group (if known):**

#### **4. Violated Security Goals (CIA Triad)**

* **Confidentiality:**
* **Integrity:**
* **Availability:**

#### **5. Defensive Measures**

* **Defense 1:**
* **Defense 2:**
* **Defense 3:**

---

### **Incident 2**

#### **1. Attack Overview**

* **Targeted Organization:**
* **Summary of Attack:**
* **Impact:**

#### **2. Key Technical Methods Used**

* **Technique 1:**
* **Technique 2:**
* **Technique 3:**

#### **3. Threat Actor Classification**

* **Type of Attacker (Nation-state, cybercriminal, etc.):**
* **APT Group (if known):**

#### **4. Violated Security Goals (CIA Triad)**

* **Confidentiality:**
* **Integrity:**
* **Availability:**

#### **5. Defensive Measures**

* **Defense 1:**
* **Defense 2:**
* **Defense 3:**

---

## **Task 2: Understanding APTs and MITRE ATT\&CK**

### **Tactic 1: \[Tactic Name and ID]**

#### **1. Overview**

* **Purpose of the tactic:**
* **Real-world example:**

#### **2. Techniques Used Under This Tactic**

* **Technique 1:**

  * **MITRE ATT\&CK ID:**
  * **Platforms Affected:**
  * **Required Permissions:**
  * **Associated Tactic(s):**
  * **Description:**
  * **Sub-techniques (if any):**
  * **Adversary Goals:**
  * **APT Groups/Campaigns Using This Technique:**
  * **Detection Strategies:**
  * **Mitigation Strategies:**
* **Technique 2:** *(same fields as above)*

---

### **Tactic 2: \[Tactic Name and ID]**

*(same structure as above)*

---

### **Tactic 3: \[Tactic Name and ID]**

*(same structure as above — ensures 3 tactics × 2 techniques = 6 total techniques)*

---

## **Task 3: Research on Two APT Groups**

### **APT Group 1: \[Group Name]**

#### **1. Overview**

* **Known Aliases:**
* **Country of Origin (if applicable):**
* **Primary Motivation (Espionage, financial, disruption):**

#### **2. Key Cyber Campaigns**

* **Campaign 1:**

  * **Timeframe:**
  * **Targeted Organizations/Sectors:**
  * **Impact:**
* **Campaign 2:**

  * **Timeframe:**
  * **Targeted Organizations/Sectors:**
  * **Impact:**

#### **3. Primary Objectives**

*

#### **4. Primary Attack Techniques**

* **Technique 1 (MITRE ID):**
* **Technique 2 (MITRE ID):**
* **Technique 3 (MITRE ID):**

#### **5. Industries / Organizations Targeted**

*

#### **6. Violated Security Goals (CIA Triad)**

* **Confidentiality:**
* **Integrity:**
* **Availability:**

---

### **APT Group 2: \[Group Name]**

*(same structure as APT Group 1)*

---

## **Task 4: Reflection and Analysis**

### **1. Challenges in Detecting APTs**

*(100–125 words)*

### **2. Challenges in Defending Against APTs**

*(100–125 words)*

### **3. Insights from Researching APTs and MITRE ATT\&CK**

*(100–125 words)*

---

# **Section 2: Practical Assignments – Lab Setup and Linux Basics**

## **Task 1: Cybersecurity Testbed Setup**

### **1. Virtual Machine Configuration**

* **Screenshots of Virtual Machine Settings (CPU, RAM, Storage for all 3 VMs)**

### **2. VM Login Verification**

* **Screenshots of successful login for all three VMs**

---

## **Task 2: Linux Basics and Network Connectivity**

### **1. Check System Information**

* **Screenshot of commands (`uname -a`, `uptime`, `whoami`, `df -h`)**
* **Brief Explanation of Outputs**

---

### **2. View Network Configuration**

* **Screenshot of `ifconfig` or `ip a` and `ip route`**
* **Explanation of assigned IP and MAC addresses**
* **Does the IP match the expected subnet? Explain why or troubleshoot.**

---

### **3. Test Connectivity Between VMs**

* **Screenshot of `ping` results between VMs**
* **Explanation of success/failure and troubleshooting steps taken**

---

### **4. Network Scanning with Nmap**

* **Screenshot of `nmap -p 1-1024 <Metasploitable2-IP>`**
* **List five open ports and corresponding services**
* **Security risks and attack surface analysis**

---

### **5. Check Running Processes & Active Connections**

* **Screenshot of `ps aux` and `netstat -tulnp` outputs**
* **Explanation of any suspicious or unusual findings, with security implications**

---

### **6. Defense VM Promiscuous Mode**

* **Screenshot of VirtualBox network adapter set to “Allow VMs” (Promiscuous Mode)**
* **Screenshot of terminal showing `PROMISC` enabled for `eth0`**

---

# **Submission Checklist**

* **Report files:** `a1_report.md` and `a1_report.pdf`
* **Screenshots folder:** `screenshots/` with all required screenshots
* **Optional extras folder:** `extras/` (scan results, configs, etc.)
* **Final submission:** `Assignment1_lastName.zip` containing all required files

