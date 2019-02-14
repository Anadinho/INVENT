using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using MinhaWebAPI.Modelos;
using MinhaWebAPI.Util;

namespace MinhaWebAPI.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class ClienteController : ControllerBase
    {
        // GET api/values
        //Listagem 
        [HttpGet]
        [Route("listagem")]
        public List<ClienteModel> Listagem()
        {
            return new ClienteModel().Listagem();
           
            
        }

        // GET api/values/5
        [HttpGet]
        [Route("cliente/{id}")]
        public ClienteModel RetornaCliente(int id)
        {
            return new ClienteModel().RetornaCliente(id);


        }



        // POST api/values
        //Registrar clientes
        [HttpPost]
        [Route("registrarcliente")]
        public ReturnAllServices RegistrarCliente([FromBody] ClienteModel dados)
        {
            ReturnAllServices retorno = new ReturnAllServices();
            
            try
            {
                dados.RegistrarCliente();
                retorno.Result = true;
                retorno.ErrorMessage = string.Empty;
            }
            catch(Exception ex)
            {
                retorno.Result = false;
                retorno.ErrorMessage = "Erro ao tentar registrar um cliente" + ex.Message;
            }

            return retorno;


        }

        // PUT 
        //Atualizar Cliente
        [HttpPut]
        [Route("atualizar/{id}")]
        public ReturnAllServices AtualizarCliente(int id,[FromBody] ClienteModel dados)
        {
            ReturnAllServices retorno = new ReturnAllServices();

            try
            {

                dados.Id = id;
                dados.AtualizarCliente();
                retorno.Result = true;
                retorno.ErrorMessage = string.Empty;
            }
            catch (Exception ex)
            {
                retorno.Result = false;
                retorno.ErrorMessage = "Erro ao tentar atualizar um cliente" + ex.Message;
            }

            return retorno;


        }

        //Delete api/values/5
        //Deletar cliente
        [HttpDelete]
        [Route("excluir/{id}")]
        public void Excluir(int id)
        {
            new ClienteModel().Excluir(id);
        }


       
    }
}
