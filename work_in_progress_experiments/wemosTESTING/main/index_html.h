const char* index_html = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
    <title>Servo Control</title>
    <script>
        function setServo(servoNum, degree) {
            const xhttp = new XMLHttpRequest();
            xhttp.open("GET", "/setServo?servo=" + servoNum + "&degree=" + degree, true);
            xhttp.send();
        }

        function updateServo() {
            var servoNum = document.getElementById("servoNum").value;
            var degree = document.getElementById("degree").value;
            setServo(servoNum, degree);
        }

        function resetServo() {
            var servoNum = document.getElementById("servoNum").value;
            document.getElementById("degree").value = 90;
            setServo(servoNum, 90);
        }
    </script>
</head>
<body>
    <h1>Servo Control</h1>
    <label for="servoNum">Servo Number:</label>
    <input type="number" id="servoNum" min="1" max="16" value="1"><br><br>
    <label for="degree">Degree:</label>
    <input type="number" id="degree" min="0" max="180" value="90"><br><br>
    <button onclick="updateServo()">Set Degree</button>
    <button onclick="resetServo()">Reset to 90°</button>
</body>
</html>
)rawliteral";
