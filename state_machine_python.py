class Statechachine:
    def _init_(self):
        self.Handlers={}
        self.StartState=None #cero
        self.endStates=[]

    def Add_States(self,name, Handler,end_State=0): #self sig. que add_states 
        name=name.upper()
        self.handler[name]=Handler #guarda las manzanas
        if end_State:
            self.end_States.append(name) #guarda la basura


    def set_start(self,name,):
        self.StartState=name.upper()

    def run(self,cargo):
        try:
            handler=self.Handlers[self.StartState]#bolsa para guardar bolsa
        except:
            raise Initialization("must call .set_start() before .run")
        if not self.endStates: #0
            raise InitializationError("at least one state must be an end_state")

        while True:
            newState=handler(cargo)
            cargo=handler(cargo)
            if newState.uppee() in self.endStates:
                print("si esta en la bolsa de basura la bolsa de manzanas con cargo", newState)
                break
            else:
                handler=self.handlers[newState.upper()] #guarda nuevas cosas en la bolsa de basura


        




