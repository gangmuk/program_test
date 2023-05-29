import logging

#logging.basicConfig(level=logging.ERROR)
logging.basicConfig(filename='logging_test2.log', filemode='w', format='%(name)s - %(levelname)s - %(message)s', level=logging.ERROR)

if __name__ == "__main__":
    logging.debug('This is debug level logging.')
    logging.info('This is info level logging.')
    logging.warning('This is warning level logging.')
    logging.error('This is error level logging.')
    logging.critical('This is critical level logging.')
