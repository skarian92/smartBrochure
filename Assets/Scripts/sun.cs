using UnityEngine;
using System.Collections;

public class sun : MonoBehaviour {

	public bool houseFound = false;
	GameObject sunObj;
	// Use this for initialization
	//Right now not in use pushed this code in defaultTrackableEventHandler
	void Start () {
		Debug.Log ("SUN START");
		sunObj = GameObject.FindGameObjectWithTag("sun");
	}
	
	// Update is called once per frame
	void Update () {

		if (houseFound) {
			Debug.Log ("SUN UPDATE");
			sunObj.transform.RotateAround (Vector3.zero, Vector3.right, 10f * Time.deltaTime);
			sunObj.transform.LookAt (Vector3.zero);
		}

	}
}
