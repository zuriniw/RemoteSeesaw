{
    "name": "doPair",
    "event": "doBlue_2",
    "template": "webhook",
    "url": "https://api.particle.io/v1/devices/events",
    "requestType": "POST",
    "noDefaults": true,
    "rejectUnauthorized": true,
    "unchunked": false,
    "data_url_response_event": false,
    "form": {
        "name": "doBlue_2",
        "private": "false",
        "access_token": "-----device_1's token-----",       // replace it into device_1's Particle token
        "data": "{{{PARTICLE_EVENT_VALUE}}}"
    }
}