FROM python:3

COPY ./requirements.txt /requirements.txt

COPY ./getIter.c /getIter.c

WORKDIR /

RUN pip install -r requirements.txt

RUN gcc getIter.c -o getIter

COPY . /

ENTRYPOINT [ "python3" ]

CMD [ "app1.py" ]
