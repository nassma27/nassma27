# Network Traffic Analysis using Artificial Intelligence (AI) in Packet Tracer

---

## Introduction
This project aims to explore the potential of using Artificial Intelligence (AI) techniques to analyze network traffic within a simulated environment created in Cisco Packet Tracer.  
The main focus is on collecting traffic data from this simulation, analyzing it using the **Isolation Forest algorithm**, and detecting anomalies that may indicate operational issues or potential security threats within the network.

---

## Project Objectives
- **2.1 Network Design**
  - Create an enterprise-like network topology in Packet Tracer including PCs, switches, and servers.
- **2.2 Traffic Data Collection & Analysis**
  - Generate and capture traffic from the simulated network.  
  - Convert captured data into a structured format (CSV) for analysis.  
  - Clean and preprocess the dataset.  
- **2.3 Apply AI Algorithm for Anomaly Detection**
  - Use **Isolation Forest** to identify unusual traffic patterns.  
- **2.4 Visualization**
  - Build a **Tkinter-based GUI** in Python to display anomalies and statistics in an intuitive manner.  

---

## Importance of the Project
With the rapid growth and complexity of modern networks, traditional monitoring methods may fall short in detecting early security or performance issues.  
This project highlights how AI can:
- Efficiently analyze large volumes of traffic data.  
- Detect abnormal patterns quickly and accurately.  
- Enhance network security through early anomaly detection.  
- Minimize downtime by identifying operational issues at an early stage.  

---

## Tools & Technologies
- **Cisco Packet Tracer** → Network simulation and traffic generation.  
- **Python 3** → Programming language for analysis.  
- **pandas** → Data cleaning and preprocessing.  
- **scikit-learn** → Machine learning library implementing Isolation Forest.  
- **Isolation Forest** → Unsupervised ML algorithm for anomaly detection.  
- **Tkinter** → Python GUI library for result visualization.  

---

## Code Workflow (Summary)
1. **Data Import** → Load captured traffic data (CSV).  
2. **Preprocessing** → Handle missing values, encode categorical features.  
3. **Model Training** → Train Isolation Forest on processed data.  
4. **Classification** → Label events as *Normal* or *Anomalous*.  
5. **Visualization** → Display results in a Tkinter-based GUI with traffic statistics and anomalies.  

---

## Work Steps
### 6.1 Network Design
- Build a simple enterprise-like network in Packet Tracer with clients, switches, and optional servers.  
- Assign IP addresses and configure basic connectivity.  

### 6.2 Data Collection
- Generate traffic (web browsing, file transfer, email, etc.).  
- Export captured traffic as a CSV file for analysis.  

### 6.3 Programming the Analysis
- Implement the Python script using **pandas, sklearn, tkinter**.  
- Train the model on traffic data and detect anomalies.  

### 6.4 Running the GUI
- Execute the Python script.  
- The Tkinter interface shows traffic statistics, packet types, and anomalous events.  

---

## Results
The GUI visualization provides:  
- **Basic traffic statistics**  
  - Total number of events/packets.  
  - Distribution of packet types (e.g., ICMP, ARP, STP).  
  - Source and destination device activity.  
- **Anomaly detection output**  
  - Number of normal vs anomalous events.  
  - Samples of anomalous events with details (timestamp, source, destination, packet type).  
- **Interpretation**  
  - Explanation of anomalies and their possible implications.  

---

## Conclusion
This project demonstrates the effectiveness of AI techniques, specifically **Isolation Forest**, in analyzing and detecting anomalies in Packet Tracer-simulated network traffic.  
The approach complements traditional monitoring tools by providing an automated, intelligent method for identifying unusual activities that could indicate security incidents or operational issues.  

---



## Contributors
- **Nassma Hassan Aboud 
- Abrar Alteb Mohamed** – 

---
