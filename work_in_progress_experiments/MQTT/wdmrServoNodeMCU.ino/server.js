const express = require('express');
const axios = require('axios');
const app = express();

const NODEMCU_IP = 'xxx.xxx.xxx.xxx'; // Replace with your NodeMCU IP address

app.use(express.static('public'));

app.listen(3000, () => {
  console.log('Server running on port 3000');
});

app.get('/sendCommand', async (req, res) => {
  const { servo, positionType, position } = req.query;
  try {
    const response = await axios.get(`http://${NODEMCU_IP}/adjust?servo=${servo}&positionType=${positionType}&position=${position}`);
    res.send(response.data);
  } catch (error) {
    res.status(500).send('Error communicating with NodeMCU');
  }
});

app.get('/saveSettings', async (req, res) => {
  try {
    const response = await axios.get(`http://${NODEMCU_IP}/save`);
    res.send(response.data);
  } catch (error) {
    res.status(500).send('Error saving settings on NodeMCU');
  }
});
