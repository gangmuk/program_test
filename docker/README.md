Mount(expose) directory in container to host.
```dockerfile
RUN mkdir temp
VOLUME [ "/temp" ]
```

Mount directory in host to container.
```dockerfile
ADD . /temp
```

Run command when the container is created.
The first argument of the CMD must be executable..?
```dockerfile
CMD [ "/run.sh" "arg1" ]
```

Copy file from host to container
```dockerfile
COPY ./app.py /app.py
```

