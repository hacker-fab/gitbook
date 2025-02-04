---
description: >-
  My weekly updates on the development of HackerFab.online NG - a
  next-generation one-stop online platform for Hacker Fab.
---

# Qirui (Ridge) Da Updates - Database

## Proposal



{% embed url="https://docs.google.com/document/d/1ud2se-wzZBqHpeyHnulM-MNzxLnWQ97BRJLWkJNX1as/edit?usp=sharing" %}
The first draft of my project proposal.
{% endembed %}

## Updates

### Week 2

#### 1/23/2025

* Proposal was a approved in class. I got some valuable suggestions from my teammates.
* Discussed how the interface between my website and Eric's hardware controlling system should look like.

#### 1/25/2025

* Domain **HackerFab.online** was registered and has the root DNS configured.&#x20;
* AWS server is up and running.&#x20;
  * Nginx with RTMP service (for potential live-stream applications) was compiled and installed.
  * MySQL (for non-volatile data) and Redis (for volatile data and MQ purpose) was installed.
  * Docker was installed.
  * Python 3.9 was installed.
  * phpMyAdmin database web management panel was configured.
  * Automatic scheduled data backup was configured.

### Week 3

#### 2/1/2025

* SFTP sync is working on my laptop. Development start now.
* HTTPS is working. Support up to TLSv1.3.
* ACME (Automatic Certificate Management Environment) is running. Certificates for TLS/SSL will be renewed automatically on a monthly basis. Certificates are issued with multi-domain SAN.
* Nginx reverse proxy is working. Support HTTP/1.1, HTTP/2, and experimentally HTTP/3 (QUIC).
* Tested a basic Flask "Hello World" app successfully. Gunicorn WSGI middleware is working great.

