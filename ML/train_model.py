
import pandas as pd
from sklearn.tree import DecisionTreeClassifier, export_text
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

data = pd.read_excel("Smart_Plant_Sensor_Dataset.xlsx")

X = data[["Soil_Moisture", "Temperature", "Humidity"]]
y = data["Label"]

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

model = DecisionTreeClassifier()
model.fit(X_train, y_train)

y_pred = model.predict(X_test)
print("Model Accuracy:", accuracy_score(y_test, y_pred))

print("\nDecision Tree Rules:\n")
print(export_text(model, feature_names=list(X.columns)))
