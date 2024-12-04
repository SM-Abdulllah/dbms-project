import axios from "axios";

const fetchData = async () => {
  try {
    const response = await axios.get("http://localhost:5000/api/courses");
    console.log(response.data);
  } catch (error) {
    console.error(error);
  }
};

fetchData();
